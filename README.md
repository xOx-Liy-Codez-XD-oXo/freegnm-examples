# Example freegnm programs

This repository holds programs to show how to use [freegnm](https://gitgud.io/gluesniffer/freegnm), a GPU library for the PlayStation 4, and [psbc](https://gitgud.io/gluesniffer/psbc), a shader binary compiler also for the PlayStation 4.

They're meant to be simple and straightforward to understand.

**NOTES:**

- There's a bug/glitch where the framebuffer doesn't display some of the pixels at the top correctly. It might be memory related.
- None of these examples were tested on a Pro/NEO PS4 and may not work.

## Examples available

### Cube

Draws a 3D textured cube.

![Screenshot](cube/screenshot.png)

### GLTF

Renders a GLTF's model with some basic PBR parameters.

![Screenshot](gltf/screenshot.png)

## References

Some of the samples are based on [Vulkan samples from Sascha Willems](https://github.com/SaschaWillems/Vulkan) 

## Building

You need the following tools to build the projects:

- Clang
- glslc from shaderc
- GNU Make
- LLD linker
- [OpenOrbis Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)
- [psbc](https://gitgud.io/gluesniffer/psbc)

Then go to one of the example's directory, and run

```bash
export OO_PS4_TOOLCHAIN=/path/to/OpenOrbis-PS4-Toolchain
make
```

## Libraries and resources

The following libraries are used:

- cglm
- cgltf
- Nuklear
- stb_image
- stb_truetype

The following resources are used:

- Chinese Dragon model
- Hack typefont
- TempleOS logo

## License

This project is licensed under the MIT license, see [COPYING](COPYING) for more information.
