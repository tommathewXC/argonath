INSTALL_FILE="config/installed.config"
PYTHON = python3

all: clean build install

build:
	@echo "building..."
	@$(PYTHON) setup.py build

install:
	@echo "Installing..."
	@sudo $(PYTHON) setup.py install --record $(INSTALL_FILE)

clean:
	@echo "removing builds..."
	@rm -rf build/

uninstall:
	@echo "Uninstalling existing versions of argonath..."
	@sudo ./scripts/remover.sh $(INSTALL_FILE)
	@echo "done."

test:
	@echo "testing argonath"
	@$(PYTHON) test.py