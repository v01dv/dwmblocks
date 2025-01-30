# dwmblocks

Modular status bar for dwm written in c.

# Installation

After making any config changes that you want, enter the following command
to build and install dwmblocks:

```
sudo make clean install
```

After that you can put dwmblocks in your xinitrc or other startup script to have
it start with dwm.

If dwmblocks is already running, enter then next command to restart it:

```
killall -q dwmblocks;setsid dwmblocks &
```

# Configuration

The statusbar is made from text output from commandline programs. Blocks are added
and removed by editing the blocks.def.h file.

I have dwmblocks read my preexisting scripts
[here in my dotfiles repo](https://github.com/v01dv/.dotfiles/tree/main/bin/.local/bin/statusbar).
So if you want my build out of the box, download those and put them in your
`$PATH`.

# Signaling changes

Most statusbars constantly rerun every script every several seconds to update.
This is an option here, but a superior choice is giving your module a signal
that you can signal to it to update on a relevant event, rather than having it
rerun idly.

For example, the audio module has the update signal 10 by default.  Thus,
running `pkill -RTMIN+10 dwmblocks` will update it.

You can also run `kill -44 $(pidof dwmblocks)` which will have the same effect,
but is faster.  Just add 34 to your typical signal number.

My volume module *never* updates on its own, instead I have this command run
along side my volume shortcuts in dwm to only update it when relevant.

Note that all modules must have different signal numbers.

# Clickable modules (Decided to not use it now)

Like i3blocks, this build allows you to build in additional actions into your
scripts in response to click events. See the above linked scripts for examples
of this using the `$BUTTON` variable.

On clicking on text corresponding to a clickable block, the program specified
to handle clicks for that block is executed with the first argument specifying
which button was clicked (1 for left, 2 for middle and 3 for right).

For this feature to work, you need the appropriate patches for dwmblocks and
dwm as well:

1. [dwmblocks-statuscmd-20210402-96cbb45](https://dwm.suckless.org/patches/statuscmd/dwmblocks-statuscmd-20210402-96cbb45.diff) for dwmblocks.
2. [dwm-statuscmd-20210405-67d76bd](https://dwm.suckless.org/patches/statuscmd/dwm-statuscmd-20210405-67d76bd.diff) for dwm.

# TODO

- [ ] Apply [statuscolors](https://dwm.suckless.org/patches/statuscolors/) patch to dwm to have colored statusbar.

# Credits

- [LukeSmithxyz](https://github.com/LukeSmithxyz/dwmblocks)
- [ashish-yadav11](https://github.com/ashish-yadav11/dwmblocks)
