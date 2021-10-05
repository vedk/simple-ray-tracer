include_directories(${TEST_SOURCE_DIR}/src)

add_executable(vec3_add_test vec3_add_test.c)
add_executable(vec3_sub_test vec3_sub_test.c)
add_executable(vec3_mul_test vec3_mul_test.c)
add_executable(vec3_div_test vec3_div_test.c)
add_executable(vec3_norm_test vec3_norm_test.c)
add_executable(vec3_normalize_test vec3_normalize_test.c)
add_executable(vec3_cross_test vec3_cross_test.c)

add_executable(init_canvas_test init_canvas_test.c)



target_link_libraries(vec3_add_test vec3)
target_link_libraries(vec3_sub_test vec3)
target_link_libraries(vec3_mul_test vec3)
target_link_libraries(vec3_div_test vec3)
target_link_libraries(vec3_norm_test vec3)
target_link_libraries(vec3_normalize_test vec3)
target_link_libraries(vec3_cross_test vec3)

target_link_libraries(init_canvas_test vec3 canvas)



add_test(vec3_add_test vec3_add_test)
add_test(vec3_sub_test vec3_sub_test)
add_test(vec3_mul_test vec3_mul_test)
add_test(vec3_div_test vec3_div_test)
add_test(vec3_norm_test vec3_norm_test)
add_test(vec3_normalize_test vec3_normalize_test)
add_test(vec3_cross_test vec3_cross_test)

add_test(init_canvas_test init_canvas_test)