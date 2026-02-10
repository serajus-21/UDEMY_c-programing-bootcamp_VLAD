// header.h
#define _initMessage "ERROR VALUE\n"

#define _message "OFF ON\n"
#define _offOn(x, y) \
    do               \
    {                \
        x = 0;       \
        y = 1;       \
    } while (0)

#define _messageSwap "ON OFF\n"
#define _onOff(x, y) \
    do               \
    {                \
        x = 1;       \
        y = 0;       \
    } while (0)

#define _line ("\n_______________________________________________\n")