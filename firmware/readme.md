# BM42

![bm42](https://i.imgur.com/M1FRsXHl.jpg)

*A simple drop-in replacement PCB for the KPR BM43 with a more sane layout*

* Keyboard Maintainer: [kb-elmo](https://github.com/kb-elmo)
* Hardware Supported: BM42 PCB
* Hardware Availability: [Open source project](https://github.com/kb-elmo/bm42)

Make example for this keyboard (after setting up your build environment):

    make kb_elmo/bm42:default

Flashing example for this keyboard:

    make kb_elmo/bm42:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the ESC key and plug in the keyboard
* **Physical reset pads**: Short the two pads labeled "RESET" on the left side of the PCB
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
