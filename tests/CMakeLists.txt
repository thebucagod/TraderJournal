# Пока заглушка, тестов нет
add_executable(TraderJournalTests
	traderlistmodel_test.cpp
)

target_link_libraries(TraderJournalTests PRIVATE TraderJournalLib)
add_test(NAME TraderJournalTests COMMAND TraderJournalTests)