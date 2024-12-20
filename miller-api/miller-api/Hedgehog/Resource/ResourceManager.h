#pragma once

namespace hh::fnd {
    class ResourceManager : public fnd::BaseObject, public TagResourceContainerListener, public csl::fnd::Singleton<ResourceManager> {
    public:
        class Listener {
        public:
            virtual ~Listener() = default;
            virtual void ResourceAddedCallback(ManagedResource* resource) {}
            virtual void ResourceRemovedCallback(ManagedResource* resource) {}
            virtual void Unk1UnkFunc1Callback(ManagedResource* resource) {}
            virtual void Unk1UnkFunc2Callback(ManagedResource* resource) {}
        };

        class ResourceListener {
        public:
            virtual ~ResourceListener() = default;
            virtual void ResourceLoadedCallback(ManagedResource* resource) {}
            virtual void ResourceUnloadedCallback(ManagedResource* resource) {}
        };

        UnpackedResourceContainer unpackedResourceContainer;
        csl::ut::PointerMap<const ResourceTypeInfo*, uint32_t> resourceContainerIndexByTypeInfo;
        TagResourceContainer tagResourceContainer;
        csl::ut::MoveArray<Listener*> listeners;
        csl::ut::MoveArray<ResourceListener*> resourceListeners;
        void* unk7;
        void* unk8;
        fnd::Reference<FilePathResolver> filePathResolver;
        fnd::Reference<ReferencedObject> unk10;
        fnd::Reference<ResourceCriticalSection> resourceCriticalSection;
        csl::ut::MoveArray<ManagedResource*> addedResources;
        csl::fnd::Mutex mutex;
        uint64_t unk11;
        csl::ut::MoveArray<void*> unk12;
        csl::fnd::Mutex mutex2;
        bool unk13;

        struct GetResourceExInfo {
            bool unk1; 
        };

        void AddResource(hh::fnd::ManagedResource* resource);
        void RemoveResource(hh::fnd::ManagedResource* resource);
        void FireResourceAdded(hh::fnd::ManagedResource* resource);
        void FireResourceRemoved(hh::fnd::ManagedResource* resource);
        ManagedResource* GetResource(const char* name, const hh::fnd::ResourceTypeInfo* resourceTypeInfo);
        ManagedResource* GetResourceEx(const char* name, const hh::fnd::ResourceTypeInfo* resourceTypeInfo, const GetResourceExInfo& info);
        ResourceManager();
        void Initialize();
        void InitializeFilePathResolvers();
        inline void AddListener(Listener* listener) {
            listeners.push_back(listener);
        }
        inline void RemoveListener(Listener* listener) {
            auto idx = listeners.find(listener);
            if (idx != -1)
                listeners.remove(idx);
        }
        void AddResourceListener(ResourceListener* listener, const hh::fnd::ResourceTypeInfo* typeInfo);
        void RemoveResourceListener(ResourceListener* listener, const hh::fnd::ResourceTypeInfo* typeInfo);

        virtual void RMRU1L_UnkFunc1(uint64_t unkParam1, uint64_t unkParam2) override;
        virtual void RMRU1L_UnkFunc2(uint64_t unkParam1, uint64_t unkParam2) override;

        const csl::ut::MoveArray<ManagedResource*>& GetResourcesByTypeInfo(const ResourceTypeInfo* typeInfo);
        csl::ut::MoveArray<UniqueResourceContainer*>& GetResourceContainers() {
            return unpackedResourceContainer.uniqueResourceContainers;
        }

        template<typename T>
        inline T* GetResource(const char* name) {
            return static_cast<T*>(GetResource(name, T::GetTypeInfo()));
        }
    };
}
