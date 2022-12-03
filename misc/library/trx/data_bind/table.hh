#ifndef TRX_DATA_BIND_TEBLE_HH
#define TRX_DATA_BIND_TABLE_HH

#include <unordered_map>
#include <string>

namespace trx::data_bind
{
    class Table
    {
    public:
        auto Property() -> std::unordered_map<std::string, std::string>;
    private:
        std::unordered_map<std::string, std::string> property;
    };
}

#endif // TRX_DATA_BIND_TABLE_HH