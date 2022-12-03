#ifndef TRX_OPTIONAL_OPTIONAL_HH
#define TRX_OPTIONAL_OPTIONAL_HH

#include <type_traits>
#include <optional>

namespace trx::optional
{

    class NullOptional final
    {
    public:
        constexpr NullOptional()
        {}
    private:
        
    };

    constexpr NullOptional null_optional = NullOptional();
    
    template <typename T>
    class Optional
    {
    public:
        
        static constexpr null_optional = NullOptional();
        
        Optional()
            : has_value(false)
        {}

        Optional(T v)
            : value(v)
            , has_value(true)
        {}

        Optional(NullOptional null_opt)
        {
            this->has_value = false;
        }

        auto operator = (const NullOptional& nul_opt) -> Optional<T>&
        {
            this->has_value = false;
            return (*this);
        }

        ~Optional()
        {}
    private:
        T value;
        bool has_value;
    };
}

#endif // TRX_OPTIONAL_OPTIONAL_HH