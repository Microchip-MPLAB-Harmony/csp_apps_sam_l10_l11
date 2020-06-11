[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TrustZone EIC pin toggle

This example application demonstrates handling of external pin interrupt in secure and non-secure project.

## Description

This demonstrates TrustZone feature and uses two projects viz., Secure and Non-Secure Project that work together on the same
MCU and offering security isolation between the Trusted and the Non-trusted resources in the device.

- Secure project uses an EIC pin to generate interrupt on rising edge and toggles the LED
- Non-secure project uses an EIC pin to generate interrupt on rising edge and toggle an GPIO pin
- Non-secure project also uses RTC to generate periodic event to toggle a GPIO pin

## Components Used

- **EIC** - Configured as Mix-Secure Peripheral for Secure EIC and Non-secure EIC interrupts
- **Event System** - Configured as Mix-Secure Peripheral for the Secure and Non-secure events
- **RTC** - Configured as Non-secure mode
- **LED** - Configured as Secure mode
- **Two NON_SECURE_PIN** - Configured as Non-secure mode

## Downloading and building the application

To download or clone this application from Github, go to the [top level of the repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_sam_l10_l11) and click

![clone](../../../../docs/images/clone.png)

Path of the application within the repository is is as shown below:

| Type        | Path                         |
|:-----------:|:----------------------------:|
| Project group | apps/trustZone/eic/eic_pin_toggle |
|Secure Project|  apps/trustZone/eic/eic_pin_toggle/Secure/firmware |
|Non-Secure Project|  apps/trustZone/eic/eic_pin_toggle/NonSecure/firmware |
||||

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| :-----------------: | :----------------------------------------------: |
| sam_l11_xpro_Secure.X <br> sam_l11_xpro_NonSecure.X | Secure and Non-secure MPLABX project for [SAML11 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320205) |
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| sam_l11_xpro_Secure.X <br> sam_l11_xpro_NonSecure.X | [SAML11 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320205) |
|||

### Setting up [SAML11 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320205)

- Connect the Debug USB port on the board to the computer using a micro USB cable
- Connect an oscilloscope/Logic analyzer to monitor the PORT pin PA08 (Pin #14 on EXT1)
- Connect an oscilloscope/Logic analyzer to monitor the PORT pin PA17 (Pin #12 on EXT1)
- Tie a pushbutton switch to PA09 (Pin #13 on EXT1) to drive the line LOW on switch press and also connect the same to the oscilloscope/logic analyzer

  ![push_button](images/push_button_to_eic.png)

## Running the Application

1. Open the project group in the MPLAB X IDE and set the non-secure project as main project
2. Build and program the application
3. Observe the output for [SAML11 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320205) as follows:
    - LED0 is toggled on Switch (SW0) press using EIC interrupt in secure project
    - Pin PA08 is toggled on Switch (connected to PA09) press using EIC interrupt in non-secure project
    - Periodic RTC event (every ~32ms) toggles PA17 pin in non-secure project

    ![output](images/output_eic_pin_toggle.png)