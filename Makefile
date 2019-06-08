SDCC_HOME=../sdcc
SDCC=${SDCC_HOME}/bin/sdcc
PORT=-mcaltech10
# PORT=-mhc08 --model-small
CFLAGS=${PORT} -S -I${SDCC_HOME}/device/include --dump-i-code --i-code-in-asm
ASMS=litassign.asm
# ASMS=arithmetic.asm directassign.asm for.asm gcd.asm if.asm litassign.asm square.asm

all: ${ASMS}

%.asm: %.c
	${SDCC} ${CFLAGS} $^

clean:
	rm -f *.asm *.cdb *.dump* *.lk *.lst *.map *.rel *.rst *.s19 *.sym 
