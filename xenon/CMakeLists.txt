add_library(xenon
	"src/xenon.h"
	"src/xenon.cpp"
)

set_target_properties(xenon PROPERTIES
	CXX_STANDARD 17
	COMPILE_WARNINGS_AS_ERROR ON
)

target_include_directories(xenon PUBLIC "src")

add_subdirectory("libs")

target_link_libraries(xenon PUBLIC glfw)
target_link_libraries(xenon PUBLIC spdlog)

target_compile_definitions(xenon PUBLIC GLFW_INCLUDE_NONE)

