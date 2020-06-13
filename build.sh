rm build/ -rf
mkdir build
cd build
em++ -o imu_js.html ../cpp/imu_js.cpp ../cpp/imu.cpp ../cpp/sensor.cpp -O3 -s WASM=1 --shell-file ../html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1  -s "EXTRA_EXPORTED_RUNTIME_METHODS=['ccall']"
mv imu_js.js ../web/gen/
mv imu_js.wasm ../web/gen/