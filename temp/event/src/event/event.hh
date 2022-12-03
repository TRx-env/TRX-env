#pragma once

namespace event
{
    // template <typename T>
    // class CRTP
    // {
    // public:
    //     auto Derived() -> T
    //     {
            
    //     }
    // };


    template <typename EventType>
    class IEvent
    {
    public:
        auto EventObject() -> EventType final
        {
            return event_type;
        }

        virtual auto IsPresent() -> bool = 0;
    private:
        EventType event_type;
    };

    template <typename T>
    class EventHander
    {
    public:

        EventHander(IEvent<T> event)
        {
            event_hander = event;
        }

        

    private:
        IEvent<T> event_hander;
    };
}