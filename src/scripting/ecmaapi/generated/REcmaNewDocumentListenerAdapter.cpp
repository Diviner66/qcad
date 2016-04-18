// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaNewDocumentListenerAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaNewDocumentListener.h"
                 void REcmaNewDocumentListenerAdapter::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RNewDocumentListenerAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaNewDocumentListener::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        
        // conversion for base class RNewDocumentListener
        REcmaHelper::registerFunction(&engine, proto, getRNewDocumentListener, "getRNewDocumentListener");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RNewDocumentListener:
        

        // methods of secondary base class RNewDocumentListener:
        

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updateNewDocumentListener, "updateNewDocumentListener");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RNewDocumentListenerAdapter*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RNewDocumentListenerAdapter*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RNewDocumentListenerAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaNewDocumentListenerAdapter::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RNewDocumentListenerAdapter(): Did you forget to construct with 'new'?"),
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
            RNewDocumentListenerAdapter
                    * cppResult =
                    new
                    RNewDocumentListenerAdapter
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RNewDocumentListenerAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaNewDocumentListenerAdapter::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RNewDocumentListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaNewDocumentListenerAdapter::getRNewDocumentListener(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RNewDocumentListener* cppResult =
                    qscriptvalue_cast<RNewDocumentListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaNewDocumentListenerAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RNewDocumentListenerAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaNewDocumentListenerAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    
        list.append("RNewDocumentListener");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RNewDocumentListener:
        

        // methods of secondary base class RNewDocumentListener:
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaNewDocumentListenerAdapter::updateNewDocumentListener
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaNewDocumentListenerAdapter::updateNewDocumentListener", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaNewDocumentListenerAdapter::updateNewDocumentListener";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RNewDocumentListenerAdapter* self = 
                        getSelf("updateNewDocumentListener", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RTransaction * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RNewDocumentListenerAdapter: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument is pointer
                    RTransaction * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RTransaction >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RNewDocumentListenerAdapter: Argument 1 is not of type RTransaction *RTransaction *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateNewDocumentListener(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RNewDocumentListenerAdapter.updateNewDocumentListener().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaNewDocumentListenerAdapter::updateNewDocumentListener", context, engine);
            return result;
        }
         QScriptValue REcmaNewDocumentListenerAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RNewDocumentListenerAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RNewDocumentListenerAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaNewDocumentListenerAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RNewDocumentListenerAdapter* self = getSelf("RNewDocumentListenerAdapter", context);
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
    RNewDocumentListenerAdapter* REcmaNewDocumentListenerAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RNewDocumentListenerAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RNewDocumentListenerAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RNewDocumentListenerAdapter.%1(): "
                        "This object is not a RNewDocumentListenerAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RNewDocumentListenerAdapter* REcmaNewDocumentListenerAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RNewDocumentListenerAdapter* selfBase = getSelf(fName, context);
                RNewDocumentListenerAdapter* self = dynamic_cast<RNewDocumentListenerAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RNewDocumentListenerAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RNewDocumentListenerAdapter.%1(): "
                    "This object is not a RNewDocumentListenerAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RNewDocumentListenerAdapter*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RNewDocumentListenerAdapter*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RNewDocumentListenerAdapter*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    