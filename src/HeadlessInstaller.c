/*	    INSTALL Clients		*/

#include <stdio.h>

int main() {

	int InstallDef;

	#ifdef __linux__

		printf("Wellcome to the Headless Installer for LXDroid.\n");
		printf("\nSelect An OS Version\n1) Vanilla\n2) Gapps\n3) Foss\n");
		printf("-> ");
		scanf("%d", &InstallDef);
		if(InstallDef == 1){ /* install Vanilla */
			
			printf("\nINSTALLING: Vanilla\n");

			#ifdef __x86_64__
				printf("[CPU-TYPE] x86_64");
				// networling code
			#elif __ARM_ARCH_7__

			#elif __i386__

			#elif __aarch64__
			
			#endif
		
		}

		else if(InstallDef == 2) { /* installs GAPPS */
			
			printf("\nINSTALLING: GAPPS\n");

			#ifdef __x86_64__
				// networling code
			#elif __ARM_ARCH_7__

			#elif __i386__

			#elif __aarch64__
				
			#endif

		}

		else if(InstallDef == 3) { /* installs FOSS */
			
			printf("\nINTALLING: FOSS\n");

			#ifdef __x86_64__
				// networling code
			#elif __ARM_ARCH_7__
				
			#elif __i386__
				
			#elif __aarch64__
				
			#endif

		}

	else {
		printf("\nYou Entered an Invalid Number Please Rerun the Installer\n");
	}

	#else 
		printf("\nLXDroid is Ment for the Linux Kernel Sorry. If This is an ERROR Make an Issus at \"https://github.com/PINKeHamton/LXDroid/issues\". \n");
		return 1;
	#endif

	return 0;

}
