rm build/ -rf
mkdir build
cd build
em++ -o example.html ../cpp/example.cpp -O3 -s WASM=1 --shell-file ../html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1  -s "EXTRA_EXPORTED_RUNTIME_METHODS=['ccall']"
mv example.js ../web/gen/
mv example.wasm ../web/gen/