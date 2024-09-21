
Debian
====================
This directory contains files used to package moiraid/moirai-qt
for Debian-based Linux systems. If you compile moiraid/moirai-qt yourself, there are some useful files here.

## moirai: URI support ##


moirai-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install moirai-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your moirai-qt binary to `/usr/bin`
and the `../../share/pixmaps/moirai128.png` to `/usr/share/pixmaps`

moirai-qt.protocol (KDE)

