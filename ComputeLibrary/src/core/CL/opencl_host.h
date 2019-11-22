//2675971c-0c9a-11ea-8d71-362b9e155667
#define OPENCL_TA_UUID \
 { 0x2675971c, 0x0c9a, 0x11ea, \
   { 0x8d, 0x71, 0x36, 0x2b, 0x9e, 0x15, 0x56, 0x67} }

/*
 * TA properties: multi-instance TA, no specific attribute
 * TA_FLAG_EXEC_DDR is meaningless but mandated.
 */
#define TA_FLAGS			TA_FLAG_EXEC_DDR

/* Provisioned stack size */
#define TA_STACK_SIZE			(2 * 1024)

/* Provisioned heap size for TEE_Malloc() and friends */
#define TA_DATA_SIZE			(32 * 1024)

/* The gpd.ta.version property */
#define TA_VERSION	"1.0"

/* The gpd.ta.description property */
#define TA_DESCRIPTION	"Example of OP-TEE Hello World Trusted Application"

/* Extra properties */
#define TA_CURRENT_TA_EXT_PROPERTIES \
    { "org.linaro.optee.examples.hello_world.property1", \
	USER_TA_PROP_TYPE_STRING, \
        "Some string" }, \
    { "org.linaro.optee.examples.hello_world.property2", \
	USER_TA_PROP_TYPE_U32, &(const uint32_t){ 0x0010 } }

int callIntoTrustZone();
