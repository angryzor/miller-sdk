#pragma once

namespace hh::fnd {
    class Packfile : public ManagedResource {
        csl::ut::MoveArray<void*> unk1;
        csl::ut::MoveArray<StaticResourceContainer*> resourceContainers;
        csl::ut::PointerMap<ResourceTypeInfo*, int> resourceIdByClass;
        csl::ut::MoveArray<void*> unk4;
        csl::ut::VariableString unk5;
        csl::ut::MoveArray<void*> unk6;
        uint8_t unk8;
        volatile int spinLock;

        Packfile(csl::fnd::IAllocator* pAllocator);
        static ManagedResource* Create(csl::fnd::IAllocator* pAllocator);
    public:
        virtual void Load(void* data, size_t size) override;
        virtual void Unload() override;

        static const ResourceTypeInfo* GetTypeInfo();
        
        csl::ut::MoveArray<StaticResourceContainer*>& GetResourceContainers() {
            return resourceContainers;
        }

        ManagedResource* GetResourceByName(const char* name, const ResourceTypeInfo* typeInfo);
        template<typename T>
        T* GetResourceByName(const char* name) {
            return static_cast<T*>(GetResourceByName(name, T::GetTypeInfo()));
        }
        const char* GetResourceIDName(int resourceId, const ResourceTypeInfo* typeInfo);
    };
}
