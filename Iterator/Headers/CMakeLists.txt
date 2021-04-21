set(SUBDIRECTORIES "iterator" "common")

foreach(VAR ${SUBDIRECTORIES})
    add_subdirectory(${VAR})
endforeach()
