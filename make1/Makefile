PROJECT=test

DEFAULT_ROOT_METHOD := SuperSU
ifeq ($(DEFAULT_ROOT_METHOD),Magisk)
ROOT_ENABLED := M-true
else ifeq ($(DEFAULT_ROOT_METHOD),SuperSU)
ROOT_ENABLED := SU-true
else
ROOT_ENABLED := false
endif

.PHONY: print_vars
print_vars:
	@echo $(ROOT_ENABLED)