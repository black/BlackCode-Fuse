// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Source\Uno\_arc.h'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Xli/Array.h>
#include <Uno/ObjectModel.h>
#include <Uno/_gc.h>

struct uARPVector
{
    uARPVector() : alloc_(0), length_(0), data_(0) { }
    ~uARPVector()
    {
        U_FREE_ARPVECTOR(data_);

        alloc_ = 0;
        length_ = 0;
        data_ = 0;
    }

    size_t Length() const { return length_; }
    uObject *operator[](size_t index) const { return data_[index]; }

    void Add(uObject *obj)
    {
        if (alloc_ == length_)
        {
            if (alloc_ == 0)
            {
                // GC doesn't support initial allocation through realloc
                data_ = (uObject**) U_MALLOC_ARPVECTOR(256 * sizeof(uObject*));
                alloc_ = 256;
            }
            else
            {
                data_ = (uObject**) U_REALLOC_ARPVECTOR(data_, alloc_ * 2 * sizeof(uObject*));
                alloc_ *= 2;
            }
        }

        data_[length_++] = obj;
    }

    void Resize(size_t newLength)
    {
        memset(data_ + newLength, 0, (length_ - newLength) * sizeof(uObject *));
        length_ = newLength;

        // TODO: Shrink container
    }

private:
    size_t alloc_;
    size_t length_;
    uObject** data_;
};

struct uAutoReleaseFrame
{
    int StartIndex;

#ifdef U_DEBUG_MEM
    int AllocCount;
    int FreeCount;
    size_t AllocSize;
    size_t FreeSize;
#endif
};

struct uCallStackFrame
{
    const char* Type;
    const char* Function;
};

struct uThreadData
{
    uARPVector AutoReleasePool;
    Xli::Array<uAutoReleaseFrame> AutoReleaseStack;
    Xli::Array<uCallStackFrame> CallStack;
};

struct uWeakObject
{
    uObject* Object;
    int RefCount;

    enum ObjectState
    {
        Dead = -1,
        Healthy,
        Infected,
        Zombie
    };

    ObjectState ZombieState;
    uWeakStateIntercept::Callback ZombieStateIntercept;
};
