Im going to use Fedora, but other distros should have the same packages (i only checked ubuntu, nix and arch).

Install all needed packages

```bash
# install base dev tools and libs
sudo dnf groupinstall -y "Development Tools" "Development Libraries"

# msp430 tools
sudo dnf copr enable nielsenb/msp430-development-tools -y
sudo dnf install -y msp430-elf-gcc msp430-elf-binutils msp430-elf-gdb mspds msp430flasher msp430-gcc-support-files dos2unix libusb readline mspdebug
```

example c file, which will spam a on tx.

```

```
# msp430_linux
