# platform-io_base-config
The very basics for starting an Arduino project on Platform-io, with some modern formatting constraints.

[platform.io](https://platformio.org/)

## Instructions 🌱
0. Make sure you have GCC installed from somewhere like [msys2.org](https://www.msys2.org/) and clang-formatter
1. Clone this repo wherever you like - rename as appropriate, then move into the folder
2. Delete the `.git` folder that came with the repo, and restart a new git environment (To unlink from this base repo, and start your new project)
```
rmdir .git
git init
```
3. Activate the virtual environment
```
.\venv\Scripts\Activate
```
4. Run a few commands to install [clang-format](https://github.com/ssciwr/clang-format-wheel) and start [pre-commit](https://pre-commit.com/#install) working
```
python -m pip install clang-format
pip install pre-commit
pre-commit install
pre-commit run
```
5. Change the configurations and secrets (described below)
6. This is probably a good time to do your first commit -- *just sayin'*
7. Happy coding! - continue your project from here

## Configuration
Most of the configuration that would vary project-to-project is in the [platformio.ini](platformio.ini) file.
This example is set-up for an Arduino Uno, because they're so ubiquitous.
The environment is also set-up for 'COM6' on a Windows PC, but you likely want [a different configuration](https://docs.platformio.org/en/latest/projectconf/sections/env/options/upload/upload_port.html).

## Secrets
There is a [secrets-example.h](src/secrets-example.h) that you should copy/paste into your own `secrets.h` file, in case you have any passwords or other credentials to hide. If you use the 'magic name' `secrets.h` this will already be covered by .gitignore, and not uploaded to an online repo.
