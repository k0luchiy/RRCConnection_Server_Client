#rm -r src/*
#rm -r build/*
#mkdir src
#mkdir build
#asn1c s1ap.asn1 -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps
gcc -g -Isrc -I. -o build/server server.c RRCConnectionRequest_coder.c RRCConnectionSetup_coder.c RRCConnectionSetupComplete_coder.c src/*.c -lsctp -DPDU=S1SetupRequest -DASN_DISABLE_OER_SUPPORT
gcc -g -Isrc -I. -o build/client client.c RRCConnectionRequest_coder.c RRCConnectionSetup_coder.c RRCConnectionSetupComplete_coder.c src/*.c -lsctp -DPDU=S1SetupRequest -DASN_DISABLE_OER_SUPPORT
