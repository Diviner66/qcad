// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaSharedPointerPainterPathSource.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaSharedPointerPainterPathSource::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPainterPathSourcePointer*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
        // shared pointer support:
        REcmaHelper::registerFunction(&engine, proto, data, "data");
        

        REcmaHelper::registerFunction(&engine, proto, isNull, "isNull");
        

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getPainterPaths, "getPainterPaths");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPainterPathSourcePointer>(), *proto);
      
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPainterPathSourcePointer",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSharedPointerPainterPathSource::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RPainterPathSource: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaSharedPointerPainterPathSource::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPainterPathSource"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSharedPointerPainterPathSource::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSharedPointerPainterPathSource::getPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaSharedPointerPainterPathSource::getPainterPaths", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerPainterPathSource::getPainterPaths";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPainterPathSource* self = 
                        getSelf("getPainterPaths", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QList < RPainterPath >'
    QList < RPainterPath > cppResult =
        
               self->getPainterPaths();
        // return type: QList < RPainterPath >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < RPainterPath >'
    QList < RPainterPath > cppResult =
        
               self->getPainterPaths(a0);
        // return type: QList < RPainterPath >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < RPainterPath >'
    QList < RPainterPath > cppResult =
        
               self->getPainterPaths(a0
        ,
    a1);
        // return type: QList < RPainterPath >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPainterPathSource.getPainterPaths().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaSharedPointerPainterPathSource::getPainterPaths", context, engine);
            return result;
        }
         QScriptValue REcmaSharedPointerPainterPathSource::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPainterPathSource* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPainterPathSourcePointer(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSharedPointerPainterPathSource::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPainterPathSource* self = getSelf("RPainterPathSource", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPainterPathSource* REcmaSharedPointerPainterPathSource::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPainterPathSource* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPainterPathSourcePointer >(context->thisObject())
                
                    ->data()
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPainterPathSource.%1(): "
                        "This object is not a RPainterPathSource").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPainterPathSource* REcmaSharedPointerPainterPathSource::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPainterPathSource* selfBase = getSelf(fName, context);
                RPainterPathSource* self = dynamic_cast<RPainterPathSource*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPainterPathSource >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPainterPathSource.%1(): "
                    "This object is not a RPainterPathSource").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaSharedPointerPainterPathSource::data
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPainterPathSource* self = getSelf("data", context);
    return qScriptValueFromValue(engine, self);
    }
     QScriptValue REcmaSharedPointerPainterPathSource::isNull
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPainterPathSourcePointer* self = REcmaHelper::scriptValueTo<RPainterPathSourcePointer >(context->thisObject());

    //RPainterPathSource* self = getSelf("isNull", context);
    //Q_ASSERT(self!=NULL);
    if (self==NULL) {
        return REcmaHelper::throwError("self is NULL", context);
    }
    return qScriptValueFromValue(engine, self->isNull());
    }
    