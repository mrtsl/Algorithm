#define TRUE 0X00000000
#define False 0xffffffff
#define LOG(fmt, args...) printf("[%s:%d]"fmt, __FUNCTION__, __LINE__, ##args)
//#define LOG(fmt, args...) printf("[%s:%s:%d]"fmt, __FILE__,__FUNCTION__,__LINE__, ##args)

void Random();