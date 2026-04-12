# Kitsune

![Kitsune PCB in Tray case](https://github.com/christianlauex/cls-keyboard/blob/master/assets/main.jpg?raw=true)

![Kitsune PCB](https://github.com/christianlauex/cls-keyboard/blob/master/assets/cls_kitsune_pcb_v1.0.jpg?raw=true)

The Kitsune PCB is the official PCB for the [CLS Keyboard](https://github.com/christianlauex/cls-keyboard).

* Keyboard Maintainer: [Christian Lau](https://github.com/christianlauex)
* Hardware Supported: CLS Kitsune v1.0
* Hardware Availability: TBD <!-- [Humanworks]() -->

## Build Firmware

**1. Setup build environment**
    
&emsp;VIAL firmware must be built using [vial-qmk](https://github.com/vial-kb/vial-qmk/tree/vial), learn more [here](https://get.vial.today/docs/porting-to-vial.html#1-prepare-your-build-environment).

<!-- VIA firmware files must be imported from [qmk-userspace-via](https://github.com/the-via/qmk_userspace_via/tree/main) before building. Default VIA files can be found from [here](https://github.com/the-via/qmk_userspace_via/tree/main/keyboards/humanworks/kitsune/keymaps/via) -->

<!-- VIAL firmware must be built using [vial-qmk](https://github.com/vial-kb/vial-qmk/tree/vial), learn more [here](https://get.vial.today/docs/porting-to-vial.html#1-prepare-your-build-environment). Default VIAL files can be found [here](https://github.com/vial-kb/vial-qmk/tree/vial/keyboards/humanworks/kitsune/keymaps/vial) -->

**2. Open QMK MSYS**

**3. Run command to build firmware**

&emsp;Use `qmk compile` for qmk firmware

    qmk compile -kb humanworks/kitsune -km {1}

&emsp;Use `make` for vial qmk

        make humanworks/kitsune:{1}

&emsp;Replace `{1}` with the name of folder containing your custom keymap (E.g. via).

> [!TIP]
> See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with the [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Flash Firmware

**A. Using QMK Toolbox**

1. Open QMK Toolbox or install from [here](https://qmk.fm/toolbox)
2. [Enter bootloader mode](#enter-bootloader-mode)
3. Click “Open”
4. Select firmware file
5. Click “Flash”

**B. Using SWD Programming Pins**

1. Unplug board
2. Connect all debugger SWD pins to PCB SWD pins (3V3, SWD, SWC, GND)
3. Use debugging software to flash firmware file (E.g. OpenOCD, STM32CubeProgrammer)

> [!TIP]
> QMK Toolbox is the recommended method for most users.

## Enter Bootloader Mode

Bootloader mode puts the board into a state that accepts flashing of new firmware. In this mode, the board will be exposed as the DFU device `STM32 BOOTLOADER`.

**A. Keycode in Layout**

1. Plug in board
2. Tap key mapped to `QK_BOOT` in keymap if it is available

**B. Using Bootmagic Reset**

1. Unplug board
2. Hold key in the top left corner (Usually `Esc`)
3. Plug in board
4. Release key

**C. Using Physical Bootloader Button**

1. Unplug board
2. Remove spacebar keycap
3. Hold push button on PCB (Labelled SW1/ BOOT)
4. Plug in board
5. Release push button

> [!NOTE]
> Physical Bootloader Button will always work. Keycode in Layout and Bootmagic Reset may not work, depending on the state of the loaded firmware.