WIDTH ?= 8
SIZE ?= 3
PROJECT_DIR  ?= result

TOP_MODULE = syncMedian
INNER_MODULE = innerMedian

AMARANTH_PATH = ~/Рабочий\ стол/amaranth/
COCOTB_PATH = ~/envs/base/
PYTHON = bin/python

A_COVER = cover_module.py
SV_COVER = median_int.py

all: $(PROJECT_DIR) clear

	@echo "Создание внутреннего-модуля $(INNER_MODULE).sv"
	@$(AMARANTH_PATH)$(PYTHON) $(A_COVER) --width=$(WIDTH) --size=$(SIZE) --name=$(INNER_MODULE) \
	> $(PROJECT_DIR)/$(INNER_MODULE).sv
	@echo "Создание топ-модуля $(TOP_MODULE).sv"
	@$(AMARANTH_PATH)$(PYTHON) $(SV_COVER) --width=$(WIDTH) --size=$(SIZE) --name=$(TOP_MODULE) \
	--inner=$(INNER_MODULE) > $(PROJECT_DIR)/$(TOP_MODULE).sv
	@rm -rf __pycache__

$(PROJECT_DIR):
	@echo "Создание директории $(PROJECT_DIR)"
	@mkdir $(PROJECT_DIR)

clear:
	@echo "Очистка директории $(PROJECT_DIR)"
	@rm -f $(PROJECT_DIR)/*.sv

.PHONY: all clear