# Example freegnm programs

This repository holds programs to show how to use [freegnm](https://gitgud.io/gluesniffer/freegnm): a GPU library for the PlayStation 4, and [psbc](https://gitgud.io/gluesniffer/psbc): a shader binary compiler also for the PlayStation 4.

They're meant to be simple and small.

**NOTES:**

- There's a bug/glitch where the framebuffer doesn't display some of the pixels at the top correctly. It might be memory related.
- None of these examples were tested on a Pro/NEO PS4 and may not work there.

## Examples available

### Triangle

Very basic example of the GPU's capabilities.

![Screenshot](triangle/screenshot.png)

### Primitives

Shows the unique primitive types available in the PS4 hardware.

![Screenshot](primitives/screenshot.png)

### Cube

Draws a 3D textured cube.

![Screenshot](cube/screenshot.png)

### GLTF

Renders a GLTF's model with some basic PBR parameters.

![Screenshot](gltf/screenshot.png)

### Instances

Example of instanced draw calls usage.

![Screenshot](instances/screenshot.png)

### Indirect

Shows how to setup and use indirect draws.

![Screenshot](indirect/screenshot.png)

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

## References

Some of the samples are based on [Vulkan samples from Sascha Willems](https://github.com/SaschaWillems/Vulkan).

Some PBR algorithms are taken from [Moving Frostbite to Physically Based Rendering](https://seblagarde.files.wordpress.com/2015/07/course_notes_moving_frostbite_to_pbr_v32.pdf).

## Libraries and resources

The following libraries are used:

- cglm
- cgltf
- Nuklear
- stb_image
- stb_truetype

The following resources are used:

- Chinese Dragon model by Morgan McGuire
- Hack typeface by SourceFoundry
- TempleOS logo by Terry A. Davis

## License

This project is licensed under the MIT license, see [COPYING](COPYING) for more information.
