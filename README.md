SOXS
====
SOXS is a utility created for LHC. SOXS will automatically setup the LHC environment for you. It will create the cross-compiler and give you the LHC toolchain - it also installs the required packages.

Got an issue or bug?
===
[Report it here] (https://github.com/JoshMiles/SOXS2/issues)

How to get SOXS
===
You do not need to download this repo to use SOXS. 

You simply have to download [the setup script] (https://raw.githubusercontent.com/JoshMiles/SOXS2/master/SOXS/toolchain/setup) (right click > _save as_).

Place the script in a new directory (perhaps `$HOME/LHC`) and then run it using
```
$ bash setup
```

> NOTE: The setup script can take from twenty minutes to an hour to complete as it compiles and builds GCC from source code to create your i686-elf cross compiler!

If you wish to cancel the setup, press _ctrl+c_.

> NOTE: The toolchain and setup scripts are written in BASH, therefore you have to download and install Cygwin for windows computers to use it.


> It is preferred if you worked in a Linux environment.

After Setup
===
Please see the wiki for documentation and how to use SOXS.

Team
===
Created by Emily and Splitty.
