add_library(vec3 vec3.c vec3.h)
add_library(canvas canvas.c canvas.h)

add_executable(srt main.c)

# Uncomment the line below to compile on GNU/Linux
# target_link_libraries(vec3 m)
target_link_libraries(canvas vec3)
target_link_libraries(srt vec3 canvas)