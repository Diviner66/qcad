// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaAutoLoadEcma.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaAutoLoadEcma::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RAutoLoadEcma*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RAutoLoadEcma*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, addAutoLoadFile, "addAutoLoadFile");
            
            REcmaHelper::registerFunction(&engine, &ctor, getAutoLoadFiles, "getAutoLoadFiles");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RAutoLoadEcma",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaAutoLoadEcma::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAutoLoadEcma(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RAutoLoadEcma
                    * cppResult =
                    new
                    RAutoLoadEcma
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAutoLoadEcma(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaAutoLoadEcma::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RAutoLoadEcma"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaAutoLoadEcma::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaAutoLoadEcma::addAutoLoadFile
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaAutoLoadEcma::addAutoLoadFile", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAutoLoadEcma::addAutoLoadFile";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RAutoLoadEcma::
       addAutoLoadFile(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAutoLoadEcma.addAutoLoadFile().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaAutoLoadEcma::addAutoLoadFile", context, engine);
            return result;
        }
         QScriptValue
        REcmaAutoLoadEcma::getAutoLoadFiles
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaAutoLoadEcma::getAutoLoadFiles", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAutoLoadEcma::getAutoLoadFiles";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        RAutoLoadEcma::
       getAutoLoadFiles();
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAutoLoadEcma.getAutoLoadFiles().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaAutoLoadEcma::getAutoLoadFiles", context, engine);
            return result;
        }
         QScriptValue REcmaAutoLoadEcma::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RAutoLoadEcma* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RAutoLoadEcma(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaAutoLoadEcma::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RAutoLoadEcma* self = getSelf("RAutoLoadEcma", context);
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
    RAutoLoadEcma* REcmaAutoLoadEcma::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RAutoLoadEcma* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RAutoLoadEcma >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RAutoLoadEcma.%1(): "
                        "This object is not a RAutoLoadEcma").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RAutoLoadEcma* REcmaAutoLoadEcma::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RAutoLoadEcma* selfBase = getSelf(fName, context);
                RAutoLoadEcma* self = dynamic_cast<RAutoLoadEcma*>(selfBase);
                //return REcmaHelper::scriptValueTo<RAutoLoadEcma >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RAutoLoadEcma.%1(): "
                    "This object is not a RAutoLoadEcma").arg(fName),
                    context);
            }

            return self;
            


        }
        