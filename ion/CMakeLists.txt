add_executable(ion
	"src/main.cpp"
)

set_property(TARGET ion PROPERTY CXX_STANDARD 17)

add_subdirectory("libs")

target_include_directories(ion PUBLIC "src")

target_link_libraries(ion PRIVATE xenon)

target_compile_definitions(ion PUBLIC GLFW_INCLUDE_NONE)

