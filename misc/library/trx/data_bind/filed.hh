#ifndef TRX_DATA_BIND_FIELDD_HH
#define TRX_DATA_BIND_FIELDD_HH

#include <unordered_map>
#include <string>

namespace trx::data_bind
{
    class Field
    {
    public:

    private:
        std::unordered_map<std::string, std::string> property;
    };
}

#endif // TRX_DATA_BIND_FIELDD_HH