//------------------------------------------------------
// 
//------------------------------------------------------
typedef void (*cbfun)(unsigned char *mdata, int mlen);

// ִ�к���
void USBLib_Main(void);
void USBLib_RegUSBRxCallback(cbfun cb);
void USBLib_USBTxHandle(unsigned char *mdata, int mlen);
// �ж���ں���
void USBLib_SysTick_Handler(void);
void USBLib_USB_LP_CAN1_RX0_IRQHandler(void);

