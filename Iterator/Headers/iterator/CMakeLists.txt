set(
    SOURCE_FILES 
    "${CMAKE_CURRENT_SOURCE_DIR}/defines.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/iterator.h"
)
set(RELATIVE_PATH "include/iterator")

if(SOURCE_FILES)
    target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

    install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()
