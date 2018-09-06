ifndef PULP_SDK_HOME
$(error PULP_SDK_HOME is not set)
endif

dirs = host hero

build:
	@$(foreach dir,$(dirs), cd $(PWD)/$(dir) &&  make build;)

header:
	@$(foreach dir,$(dirs), cd $(PWD)/$(dir) &&  make header;)

all: build

.PHONY: clean
clean:
	@$(foreach dir,$(dirs), cd $(PWD)/$(dir) &&  make clean;)
