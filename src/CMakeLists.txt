set(SOURCES
	main.cpp
	musiclibrary.cpp
)

set(HEADERS
	musiclibrary.h
)

set(UI
	musiclibrary.ui
)

# Tell CMake to create the helloworld executable
add_executable(MusicLibrary ${SOURCES} ${UI})

# Use the Widgets module from Qt 5.
target_link_libraries(MusicLibrary Qt5::Widgets)
