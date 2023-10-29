# platform-io_base-config
The very basics for starting an Arduino project on Platform-io, with some modern formatting constraints.

[platform.io](https://platformio.org/)

## Configuration
Most of the configuration that would vary project-to-project is in the [platformio.ini](platformio.ini) file. 
This example is set-up for an Arduino Uno, because they're so ubiquitous.
The environment is also set-up for 'COM6' on a Windows PC, but you likely want [a different configuration](https://docs.platformio.org/en/latest/projectconf/sections/env/options/upload/upload_port.html).

## Secrets
There is a [secrets-example.h](secrets-example.h) that you should copy/paste into your own `secrets.h` file, in case you have any passwords or other credentials to hide. If you use the 'magic name' `secrets.h` this will already be covered by .gitignore, and not uploaded to an online repo.
