#pragma once

namespace hh::fnd
{
	class TlsfHeapAllocatorBase : public csl::fnd::IAllocator
	{
	private:
		csl::fnd::IAllocator* pAllocator;
		csl::fnd::TlsfHeapBase* pHeap;
		void* pBuffer;

	public:
		TlsfHeapAllocatorBase(csl::fnd::TlsfHeapBase* heap);
	};

	class ThreadSafeTlsfHeapAllocator : public TlsfHeapAllocatorBase
	{
	public:
		struct SetupInfo {
			size_t memorySize;
			bool unk;
		};

        csl::fnd::TlsfHeapTemplate<csl::fnd::Mutex> heap;

		ThreadSafeTlsfHeapAllocator(const char* name) : TlsfHeapAllocatorBase{ &heap }, heap{ name } { }
		void Setup(csl::fnd::IAllocator* memoryRouterAllocator, const SetupInfo& setupInfo);
		virtual void* Alloc(size_t in_size, size_t in_alignment) override;
		virtual void Free(void* in_pMemory) override;
	};

	class OptimizedFreeListHeapAllocatorBase : public csl::fnd::IAllocator
	{
	private:
		csl::fnd::IAllocator* pAllocator;
		csl::fnd::OptimizedFreeListHeapBase* pHeap;
		void* pBuffer;

	public:
		OptimizedFreeListHeapAllocatorBase(csl::fnd::OptimizedFreeListHeapBase* heap);
	};

	class OptimizedFreeListHeapAllocator : public OptimizedFreeListHeapAllocatorBase
	{
	public:
		struct SetupInfo {
			size_t memorySize;
			bool unk;
		};

        csl::fnd::OptimizedFreeListHeapTemplate<csl::fnd::DummyLock> heap;

		OptimizedFreeListHeapAllocator(const char* name) : OptimizedFreeListHeapAllocatorBase{ &heap }, heap{ name } { }
		void Setup(csl::fnd::IAllocator* memoryRouterAllocator, const SetupInfo& setupInfo);
		virtual void* Alloc(size_t in_size, size_t in_alignment) override;
		virtual void Free(void* in_pMemory) override;
	};
}
