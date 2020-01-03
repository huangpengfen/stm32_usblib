//------------------------------------------------------
// 
//------------------------------------------------------
typedef void (*cbfun)(unsigned char *mdata, int mlen);

// 执行函数
void USBLib_Main(void);
void USBLib_RegUSBRxCallback(cbfun cb);
void USBLib_USBTxHandle(unsigned char *mdata, int mlen);
// 中断入口函数
void USBLib_SysTick_Handler(void);
void USBLib_USB_LP_CAN1_RX0_IRQHandler(void);

