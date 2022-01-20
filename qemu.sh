#! /bin/sh
 qemu-system-x86_64 -m 1024 -boot d -enable-kvm -net nic -net user,hostfwd=tcp::10042-:4242 -hda disk.img -cdrom SnowCrash.iso
