## 引脚对应表

主控 STM32F103C8T6 与其他外设的引脚连接表
|      扩展模块       |  模块引脚  | 主控引脚 |   功能   |
| :-----------------: | :--------: | :------: | :------: |
|  超声模块 HC-SR04   |    Trig    |   PA7    | 定时中断 |
|                     |    Echo    |   PA6    | 定时输入 |
|  循迹模块 TCRT5000  |     L2     |   PB5    |   GPIO   |
|                     |     L1     |   PB4    |   GPIO   |
|                     |     M      |   PB3    |   GPIO   |
|                     |     R1     |   PA15   |   GPIO   |
|                     |     R2     |   PA12   |   GPIO   |
|      红外模块       |     DO     |   PB0    |   GPIO   |
|   视觉模块 OpenMV   |    RXD     |   PA9    |   UART   |
|                     |    TXD     |   PA10   |   UART   |
|   蓝牙模块 HC-05    |    RXD     |   PA2    | UART中断 |
|                     |    TXD     |   PA3    | UART中断 |
|   发声模块 蜂鸣器   |     DI     |   PA1    |   PWM    |
|    发光模块 LED     | LED1（左） |   PA4    |   GPIO   |
|                     | LED2（右） |   PA5    |   GPIO   |
|    显示模块 OLED    |    SCL     |   PB6    |   IIC    |
|                     |    SDA     |   PB7    |   IIC    |
| 电机驱动模块 TB6612 |    AIN1    |   PB15   |   GPIO   |
|                     |    AIN2    |   PA8    |   GPIO   |
|                     |    PWNA    |   PB9    |   PWM    |
|                     |    BIN1    |   PA11   |   GPIO   |
|                     |    BIN2    |   PB14   |   GPIO   |
|                     |    PWMB    |   PB8    |   PWM    |
