lib /def:echo_lib.def /out:echo_lib.lib
cl /EHsc echo.cpp /link echo_lib.lib
