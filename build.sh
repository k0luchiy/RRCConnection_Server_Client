#rm -r src/*
#rm -r build/*
#mkdir src
#mkdir build
#asn1c EUTRA-RRC-Definitions.asn -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps
gcc -g -Isrc -I. -o build/server server.c RRCConnectionRequest_coder.c RRCConnectionSetup_coder.c RRCConnectionSetupComplete_coder.c src/*.c -lsctp -DPDU=RRCConnectionRequest -DASN_DISABLE_OER_SUPPORT
gcc -g -Isrc -I. -o build/client client.c RRCConnectionRequest_coder.c RRCConnectionSetup_coder.c RRCConnectionSetupComplete_coder.c src/*.c -lsctp -DPDU=RRCConnectionRequest -DASN_DISABLE_OER_SUPPORT
