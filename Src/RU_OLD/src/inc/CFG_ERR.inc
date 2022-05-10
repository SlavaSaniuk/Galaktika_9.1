const cfOk                                =  0;
    // Ok :-)

const cfErrObjectTypeNotExist             = -1;
    // тип объекта не существует
const cfErrObjectTypeAlreadyExist         = -2;
    // тип объекта уже существует

const cfErrObjectNotExist                 = -3;
    // объект не существует
const cfErrObjectAlreadyExist             = -4;
    // уже есть объект с таким именем, как у создаваемого шаблона

const cfErrContainerObjectNotExist        = -5;
    // контейнер не существует

const cfErrPropNotExist                   = -6;
    // свойство не существует
const cfErrPropAlreadyExist               = -7;
    // свойство уже существует

const cfErrObjectSelfAlreadyExist         = -8;
    // уже есть объект с указанным Self'ом
const cfErrContainerSelfNotExist          = -9;
    // не найдено контейнера с указанным Self'ом

const cfErrCantEditProp                   =  -10;
    // нельзя редактировать указанное свойство
const cfErrPropValueError                 = -11;
    // значение поле не совместимо по типу с указанным свойством
const cfErrCantCreateObject               = -12;
    // нельзя создать объект или шаблон в указанном контейнере
const cfErrCreateObjectError              = -14;
    // не получилось создать объект

const cfErrTemplateAlreadyExist           = -15;
    // создается шаблон, который уже был до этого
const cfErrTemplateNotExist               = -16;
    // шаблон не существует
const cfErrTemplateObjectAlreadyExist     = -17;
    // такой объект уже есть в шаблоне

const cfErrObjectStorageNotCreated        = -18;
    // вызвана функция управления ObjectStorage, а он не создан 

const cfErrInternalBadCommand             = -19;
    // неизвестная команда сервисных функций

const cfErrBadFieldType                   = -20;
    // не того типа параметр

const cfErrBadFind                        = -21;
    // атом не найден

const cfErrMustBeUnsigned                 = -23;
    // Значение типа cftUnsignedInteger меньше 0

const cfErrThisRemoteProp                 = -24;
    // свойство на клиенте

const cfErrCurrentContainerNil            = -25;
    // текущий контейнер не задан

const cfErrObjectNotStorable              = -26;
    // объект не поддерживает сохранение/загрузку
const cfErrLoadObjectError                = -27;
    // не получилось загрузить объект
const cfErrStoreResourceNotFound          = -28;
    // не найден ресурс для сохранения конфигурации
