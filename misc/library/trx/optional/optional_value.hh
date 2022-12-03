#ifndef TRX_OPTIONAL_OPTIONAL_VALUE_HH
#define TRX_OPTIONAL_OPTIONAL_VALUE_HH

#include "optional.hh"
#include <functional>

namespace trx::optional
{
    template <typename T>
    class Value
    {
    public:
        
        using Type = typename trx::optional::Value;
        
        Value(trx::optional::Optional<T> o)
            : opt(o)
        {}

        Value()
        {}

    private:
        trx::optional::Optional<T> opt
    };
}

#endif // TRX_OPTIONAL_OPTIONAL_VALUE_HH