# Moirai Snap Packaging

Commands for building and uploading a Moirai Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official Moirai binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register moirai-core
snapcraft upload \*.snap
sudo snap install moirai-core
```

### Usage
```
moirai-unofficial.cli # for moirai-cli
moirai-unofficial.d # for moiraid
moirai-unofficial.qt # for moirai-qt
moirai-unofficial.test # for test_moirai
moirai-unofficial.tx # for moirai-tx
```

### Uninstalling
```
sudo snap remove moirai-unofficial
```