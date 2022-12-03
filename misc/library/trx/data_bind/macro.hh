#ifndef TRX_DATA_BIND_MACRO_HH
#define TRX_DATA_BIND_MACRO_HH

namespace trx::data_bind::macro
{
    
#   define FIELD(type, name) type name;

#   define BIND(...) static constexpr auto fields = std::make_tuple(__VA_ARGS__ ); \

#   define TABLE(x, ...) struct x \
    { \
        __VA_ARGS__; \
    };
}

#endif // TRX_DATA_BIND_MACRO_HH