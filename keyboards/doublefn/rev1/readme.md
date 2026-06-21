# doublefn/rev1

Keyboard with two layers of f-keys (F1-F12, F13-F24).
Home project, keyboard is made of wood and [SU120](https://github.com/e3w2q/su120-keyboard) PCBs.
Revision 1 uses STM32F103 (Blue Pill)

* Keyboard Maintainer: [Vasilii Kuimov](https://github.com/anteok)

Make example for this keyboard (after setting up your build environment):

    make doublefn/rev1:default

Flashing example for this keyboard:

    make doublefn/rev1:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available