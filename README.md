# Planck chicochico

This is the source code for the layout of my planck-ez keyboard.

- [QMK docs](https://docs.qmk.fm/)
- Build against ZSA [fork of QMK](https://github.com/zsa/qmk_firmware/)
- Based on this revision created in Oryx: [#gbjP3](https://configure.zsa.io/planck-ez/layouts/Mn4ZY/gbjP3/0)

## Compiling with docker
Run the following to compile the firmware:
```
# clone the firmware
git clone --recurse-submodules git@github.com:zsa/qmk_firmware.git

# clone the keymap inside the keymaps directory
git clone <THIS REPO> qmk_firmware/keyboards/planck/keymaps/planck-chicochico

# finally run
util/docker_build.sh planck/ez/glow:planck-chicochico
```

A firmware file `planck_ez_glow_planck-chicochico.bin` will be created in the root of the project.\
Use [Wally](https://github.com/zsa/wally) to flash the keyboard.
