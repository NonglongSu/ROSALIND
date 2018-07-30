default: all 
all: $(SOURCES) $(EXECUTABLE) $(DATA) print

$(EXECUTABLE): $(SOURCES) 	
	$(CXX) -o $@ $< $(CFlags) 

print:
	./$(EXECUTABLE) $(DATA)

.PHONY:print

clean: 
	-rm -f $(EXECUTABLE) 

.PHONY:clean
